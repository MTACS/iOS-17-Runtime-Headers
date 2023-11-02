
@interface _HDOntologyManifestItem : NSObject {
    NSURL * _URL;
    NSString * _checksum;
    NSString * _identifier;
    NSString * _locale;
    NSString * _region;
    NSString * _schemaType;
    long long  _schemaVersion;
    long long  _size;
    long long  _version;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *checksum;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *locale;
@property (nonatomic, readonly, copy) NSString *region;
@property (nonatomic, readonly, copy) NSString *schemaType;
@property (nonatomic, readonly) long long schemaVersion;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) long long version;

+ (id)manifestItemFromLine:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)checksum;
- (id)identifier;
- (id)init;
- (id)locale;
- (id)region;
- (id)schemaType;
- (long long)schemaVersion;
- (long long)size;
- (long long)version;

@end
