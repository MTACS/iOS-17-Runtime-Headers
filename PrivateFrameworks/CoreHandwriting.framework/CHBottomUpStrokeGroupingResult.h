
@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult {
    NSDictionary * _substrokePlacementsByStrokeIdentifier;
}

@property (nonatomic, readonly) NSDictionary *substrokePlacementsByStrokeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokePlacementsByStrokeIdentifier:(id)arg4;
- (id)substrokePlacementsByStrokeIdentifier;

@end
