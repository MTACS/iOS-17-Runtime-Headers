
@interface CHStrokeGroup : NSObject <CRDirectionalRegion, NSSecureCoding> {
    long long  _ancestorIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _classification;
    CHEncodedStrokeIdentifier * _firstStrokeIdentifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstStrokeOrigin;
    double  _groupingConfidence;
    CHEncodedStrokeIdentifier * _lastStrokeIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _normalizedSize;
    NSString * _strategyIdentifier;
    NSSet * _strokeIdentifiers;
    long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) long long ancestorIdentifier;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } averageWritingOrientation;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long classification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CHEncodedStrokeIdentifier *firstStrokeIdentifier;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } firstStrokeOrigin;
@property (nonatomic, readonly) double groupingConfidence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CHEncodedStrokeIdentifier *lastStrokeIdentifier;
@property (readonly) unsigned long long layoutDirection;
@property (nonatomic, readonly) NSString *strategyIdentifier;
@property (nonatomic, readonly) NSSet *strokeIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long uniqueIdentifier;

+ (bool)isStrokeGroupSet:(id)arg1 equivalentToStrokeGroupSet:(id)arg2;
+ (id)strokeGroupContainingStrokeIdentifier:(id)arg1 strokeGroups:(id)arg2;
+ (id)strokeGroupContainingStrokeIdentifier:(id)arg1 strokeGroups:(id)arg2 foundStrokeGroupIndex:(long long*)arg3;
+ (id)strokeGroupsClusteredByProximity:(id)arg1;
+ (id)strokeIdentifierToGroupIndexMappingForStrokeIdentifiers:(id)arg1 orderedStrokeGroups:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)ancestorIdentifier;
- (struct CGVector { double x1; double x2; })averageWritingOrientation;
- (id)boundingQuad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (long long)classification;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstStrokeIdentifier;
- (struct CGPoint { double x1; double x2; })firstStrokeOrigin;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg8;
- (double)groupingConfidence;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 classification:(long long)arg5 groupingConfidence:(double)arg6 strategyIdentifier:(id)arg7 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg8;
- (id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 classification:(long long)arg7 groupingConfidence:(double)arg8 strategyIdentifier:(id)arg9 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg10;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToStrokeGroup:(id)arg1;
- (id)lastStrokeIdentifier;
- (unsigned long long)layoutDirection;
- (struct CGPath { }*)newEstimatedBaselineForStrokesWithTokens:(id)arg1 tokenStrokeIdentifiers:(id)arg2;
- (struct CGSize { double x1; double x2; })normalizedSize;
- (void)setNormalizedSize:(struct CGSize { double x1; double x2; })arg1;
- (id)strategyIdentifier;
- (id)strokeIdentifiers;
- (long long)uniqueIdentifier;
- (void)updateStrategyIdentifier:(id)arg1 classification:(long long)arg2;

@end
