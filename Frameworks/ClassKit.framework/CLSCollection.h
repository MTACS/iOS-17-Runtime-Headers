
@interface CLSCollection : CLSObject <CLSRelationable> {
    NSString * _colorName;
    NSDate * _dateClassCreated;
    NSString * _iconID;
    NSString * _location;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, copy) NSString *colorName;
@property (nonatomic, retain) NSDate *dateClassCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iconID;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)addCollectionItem:(id)arg1;
- (unsigned long long)childCount;
- (unsigned long long)childCount:(long long)arg1;
- (id)children;
- (id)children:(long long)arg1;
- (id)colorName;
- (id)dateClassCreated;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)iconID;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 location:(id)arg3 type:(long long)arg4 icon:(id)arg5;
- (id)location;
- (void)mergeWithObject:(id)arg1;
- (id)name;
- (void)removeCollectionItem:(id)arg1;
- (void)setColorName:(id)arg1;
- (void)setDateClassCreated:(id)arg1;
- (void)setIconID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (bool)validateObject:(id*)arg1;

@end
