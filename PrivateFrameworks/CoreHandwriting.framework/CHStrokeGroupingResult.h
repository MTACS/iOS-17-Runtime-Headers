
@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _createdStrokeGroups;
    NSSet * _deletedStrokeGroups;
    NSArray * _strokeGroupClusters;
    NSSet * _strokeGroups;
    NSArray * _strokeGroupsSortedByCTLD;
    NSArray * _strokeGroupsSortedByWritingOrientation;
    NSArray * _strokeGroupsSortedTopBottomLeftRight;
    NSArray * _textStrokeGroupClusters;
    NSSet * _textStrokeGroups;
    NSArray * _textStrokeGroupsSortedByCTLD;
    NSArray * _textStrokeGroupsSortedByWritingOrientation;
}

@property (nonatomic, readonly, copy) NSSet *createdStrokeGroups;
@property (nonatomic, readonly, copy) NSSet *deletedStrokeGroups;
@property (nonatomic, readonly, copy) NSArray *strokeGroupClusters;
@property (nonatomic, readonly, copy) NSSet *strokeGroups;
@property (nonatomic, readonly, copy) NSArray *textStrokeGroupClusters;
@property (nonatomic, readonly, copy) NSSet *textStrokeGroups;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdStrokeGroups;
- (id)deletedStrokeGroups;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)strokeGroupClusters;
- (id)strokeGroups;
- (id)strokeGroupsSortedBy:(unsigned long long)arg1 textGroupsOnly:(bool)arg2;
- (id)textStrokeGroupClusters;
- (id)textStrokeGroups;

@end
