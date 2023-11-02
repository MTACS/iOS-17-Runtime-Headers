
@interface HDRapportRequestIdentifier : NSObject {
    NSString * _name;
    long long  _schemaIdentifier;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long schemaIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSchemaIdentifier:(long long)arg1 name:(id)arg2;
- (id)name;
- (long long)schemaIdentifier;

@end
