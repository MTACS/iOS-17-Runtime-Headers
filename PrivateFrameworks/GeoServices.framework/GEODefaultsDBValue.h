
@interface GEODefaultsDBValue : NSObject {
    long long  _dbId;
    GEODefaultsDBCollection * _parent;
    NSString * _type;
    id  _value;
}

@property (nonatomic) long long dbId;
@property (nonatomic, readonly) GEODefaultsDBCollection *parent;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) id value;

+ (id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3;

- (void).cxx_destruct;
- (long long)dbId;
- (id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3;
- (id)parent;
- (void)setDbId:(long long)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (id)type;
- (id)value;

@end
