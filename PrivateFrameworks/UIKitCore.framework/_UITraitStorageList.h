
@interface _UITraitStorageList : NSObject <NSCoding> {
    NSSet * _descendants;
    id  _topLevelObject;
    NSArray * _traitStorages;
}

@property (nonatomic, readonly) NSSet *descendants;
@property (nonatomic, readonly) id topLevelObject;
@property (nonatomic, readonly) NSArray *traitStorages;

- (void).cxx_destruct;
- (id)descendants;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3;
- (id)topLevelObject;
- (id)traitStorages;

@end
