
@interface HUSplitRoomTransformedItem : HFAccessoryRepresentableTransformItem <NAIdentifiable, NSCopying> {
    HMRoom * _room;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMRoom *room;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSourceItem:(id)arg1 room:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)room;
- (id)updateWithOptions:(id)arg1;

@end
