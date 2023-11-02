
@interface GDVUChangeBookmark : NSObject {
    void inner;
}

@property (nonatomic, readonly) long long hash;

+ (id)decodeFromData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)encodeToDataAndReturnError:(id*)arg1;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
