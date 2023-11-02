
@interface PRPosterCollectionDiffInspector : NSObject {
    NSSet * _addedAssocPosters;
    NSSet * _addedPosters;
    NSOrderedCollectionDifference * _assocPostersDiff;
    bool  _associatedPostersAreEqual;
    bool  _isEqual;
    PRPosterCollection * _lhsCollection;
    bool  _orderedPostersAreEqual;
    bool  _postersAreEqual;
    NSOrderedCollectionDifference * _postersDiff;
    NSSet * _removedAssocPosters;
    NSSet * _removedPosters;
    PRPosterCollection * _rhsCollection;
    bool  _selectedPostersAreEqual;
    NSSet * _updatedAssocPosters;
    NSSet * _updatedPosters;
}

@property (nonatomic, readonly) NSSet *addedAssocPosters;
@property (nonatomic, readonly) NSSet *addedPosters;
@property (nonatomic, readonly) bool associatedPostersAreEqual;
@property (nonatomic, readonly) PRPosterCollection *initialCollection;
@property (nonatomic, readonly) bool isEqual;
@property (nonatomic, readonly) PRPosterCollection *newCollection;
@property (nonatomic, readonly) bool orderedPostersAreEqual;
@property (nonatomic, readonly) bool postersAreEqual;
@property (nonatomic, readonly) NSOrderedCollectionDifference *postersDiff;
@property (nonatomic, readonly) NSSet *removedAssocPosters;
@property (nonatomic, readonly) NSSet *removedPosters;
@property (nonatomic, readonly) bool selectedPostersAreEqual;
@property (nonatomic, readonly) NSSet *updatedAssocPosters;
@property (nonatomic, readonly) NSSet *updatedPosters;

- (void).cxx_destruct;
- (id)addedAssocPosters;
- (id)addedPosters;
- (bool)associatedPostersAreEqual;
- (id)initWithCollection:(id)arg1 newCollection:(id)arg2;
- (id)initialCollection;
- (bool)isEqual;
- (id)newCollection;
- (bool)orderedPostersAreEqual;
- (bool)postersAreEqual;
- (id)postersDiff;
- (id)removedAssocPosters;
- (id)removedPosters;
- (bool)selectedPostersAreEqual;
- (id)updatedAssocPosters;
- (id)updatedPosters;

@end
