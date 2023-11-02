
@interface NSISEngine : NSObject <NSISVariableDelegate> {
    bool  _accessedFromMainThread;
    bool  _accumulatingRemovals;
    bool  _allowUnoptimizedReads;
    NSThread * _allowedBGThread;
    NSISObjectiveLinearExpression * _artificialObjectiveRowBody;
    NSISVariable * _artificialObjectiveRowHead;
    NSISVariable * _artificialRowHead;
    int  _automaticOptimizationDisabledCount;
    NSMapTable * _brokenConstraintNegativeErrors;
    NSMapTable * _brokenConstraintPositiveErrors;
    unsigned int  _changeCountAtLastOptimization;
    bool  _changeNotificationsDirty;
    struct { 
        struct { /* ? */ } *blocks; 
        unsigned long long blocksCount; 
        unsigned long long blocksCapacity; 
        struct { 
            union { 
                unsigned long long _data; 
                unsigned long long *_buckets; 
            } ; 
            unsigned int _bucketCount; 
            unsigned int _popCount; 
        } freeIndexes; 
    }  _colTables;
    <NSISEngineDelegate> * _delegate;
    _NSISVariableObservable * _dirtyObservables;
    NSISVariableObservation * _dirtyVariableObservations;
    int  _engineDelegateCallsDisabledCount;
    bool  _engineNeedsOptimization;
    bool  _engineNeedsRebuildFromConstraints;
    struct CGSize { 
        double width; 
        double height; 
    }  _engineScalingCoefficients;
    struct { 
        struct { /* ? */ } *blocks; 
        unsigned long long blocksCount; 
        unsigned long long blocksCapacity; 
        struct { 
            union { 
                unsigned long long _data; 
                unsigned long long *_buckets; 
            } ; 
            unsigned int _bucketCount; 
            unsigned int _popCount; 
        } freeIndexes; 
    }  _engineVarTable;
    NSISVariable * _headForObjectiveRow;
    struct { 
        NSISEngine *engine; 
        struct { /* ? */ } *storage; 
    }  _objectiveRow;
    bool  _optimizationInProgress;
    NSHashTable * _pendingMarkerDelegates;
    NSMutableArray * _pendingRemovals;
    unsigned long long  _pivotCount;
    NSISVariable * _placeholderHeadForExpressionBeingAdded;
    NSMutableDictionary * _recordedOperations;
    bool  _revertsAfterUnsatisfiabilityHandler;
    struct { 
        struct { /* ? */ } *blocks; 
        unsigned long long blocksCount; 
        unsigned long long blocksCapacity; 
        struct { 
            union { 
                unsigned long long _data; 
                unsigned long long *_buckets; 
            } ; 
            unsigned int _bucketCount; 
            unsigned int _popCount; 
        } freeIndexes; 
    }  _rowTables;
    NSMapTable * _rows;
    unsigned int  _totalChangeCount;
    id /* block */  _unsatisfiabilityHandler;
    unsigned long long  _variableChangeCount;
    NSObject<NSObservable> * _variableChangeTransactionSignal;
    int  _variableDelegateCallsDisabledCount;
    NSMapTable * _variableObservables;
    struct NSISObjectTable { } * _variablesObservations;
    NSMutableArray * _variablesWithValueRestrictionViolations;
}

@property (retain) NSISObjectiveLinearExpression *artificialObjectiveRowBody;
@property (retain) NSISVariable *artificialObjectiveRowHead;
@property (retain) NSISVariable *artificialRowHead;
@property (readonly, copy) NSString *debugDescription;
@property <NSISEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } engineScalingCoefficients;
@property (readonly) unsigned long long hash;
@property (getter=isOptimizationInProgress, readonly) bool optimizationInProgress;
@property bool revertsAfterUnsatisfiabilityHandler;
@property bool shouldIntegralize;
@property (readonly) Class superclass;
@property (readonly) unsigned long long variableChangeCount;
@property (retain) NSMutableArray *variablesWithValueRestrictionViolations;

// Image: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout

+ (bool)_dbg_anyEngineContainsVariable:(id)arg1;
+ (bool)enableEngineTrace;
+ (void)setEnableEngineTrace:(bool)arg1;
+ (void)setLogOnInvalidUseFromBGThread:(bool)arg1;
+ (void)setTraceFileSuffix:(id)arg1;
+ (id)traceFileSuffix;

- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (unsigned long long)_optimizeWithoutRebuilding;
- (void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (id)allVariableValues;
- (id)artificialObjectiveRowBody;
- (id)artificialObjectiveRowHead;
- (id)artificialRowHead;
- (void)beginBookkeepingForVariableIfNeeded:(id)arg1;
- (void)beginRecording;
- (id)candidateRedundantConstraints;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3;
- (unsigned long long)colCount;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2;
- (id)constraints;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (bool)containsConstraintWithMarker:(id)arg1;
- (bool)containsVariable:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endBookkeepingForVariableIfUnused:(id)arg1;
- (struct CGSize { double x1; double x2; })engineScalingCoefficients;
- (struct { unsigned int x1; })engineVarIndexForVariable:(id)arg1;
- (void)enumerateRows:(id /* block */)arg1;
- (bool)exerciseAmbiguityInVariable:(id)arg1;
- (bool)hasObservableForVariable:(id)arg1;
- (bool)hasValue:(double*)arg1 forExpression:(id)arg2;
- (bool)hasValue:(double*)arg1 forVariable:(id)arg2;
- (bool)hasValueForPossiblyDeallocatedVariable:(id)arg1;
- (id)init;
- (double)integralizationAdjustmentForMarker:(id)arg1;
- (bool)isObservingChangesForVariable:(id)arg1;
- (bool)isOptimizationInProgress;
- (bool)isTrackingVariableChanges;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (id)observableForVariable:(id)arg1;
- (unsigned long long)optimize;
- (void)performModifications:(id /* block */)arg1 withUnsatisfiableConstraintsHandler:(id /* block */)arg2;
- (void)performPendingChangeNotifications;
- (void)performPendingChangeNotificationsForItem:(id)arg1;
- (unsigned long long)pivotCount;
- (id)recordedCommandsData;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)removeObservableForVariable:(id)arg1;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(bool)arg2;
- (bool)revertsAfterUnsatisfiabilityHandler;
- (unsigned long long)rowCount;
- (void)setArtificialObjectiveRowBody:(id)arg1;
- (void)setArtificialObjectiveRowHead:(id)arg1;
- (void)setArtificialRowHead:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngineScalingCoefficients:(struct CGSize { double x1; double x2; })arg1;
- (void)setRevertsAfterUnsatisfiabilityHandler:(bool)arg1;
- (void)setShouldIntegralize:(bool)arg1;
- (void)setVariablesWithValueRestrictionViolations:(id)arg1;
- (bool)shouldIntegralize;
- (void)startObservingChangesForVariable:(id)arg1;
- (void)stopObservingChangesForVariable:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; }*)traceState;
- (bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (bool)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(id /* block */)arg3;
- (double)valueForExpression:(id)arg1;
- (double)valueForVariable:(id)arg1;
- (bool)valueOfVariableIsAmbiguous:(id)arg1;
- (int)valueRestrictionForEngineVarIndex:(struct { unsigned int x1; })arg1;
- (unsigned long long)variableChangeCount;
- (id)variableChangeTransactionSignal;
- (id)variableForEngineVarIndex:(struct { unsigned int x1; })arg1;
- (id)variablesWithValueRestrictionViolations;
- (void)verifyInternalIntegrity;
- (void)withAutomaticOptimizationDisabled:(id /* block */)arg1;
- (void)withBehaviors:(unsigned long long)arg1 performModifications:(id /* block */)arg2;
- (void)withDelegateCallsDisabled:(id /* block */)arg1;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_UIKitEngineTrackingOn;
- (unsigned long long)_UIKitRowCount;
- (void)_setUIKitEngineTrackingOn:(bool)arg1;
- (id)debugQuickLookObject;

@end
