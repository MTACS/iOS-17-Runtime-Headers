
@interface KVProfile : NSObject <NSSecureCoding> {
    NSObject<KVProfileReader> * _profileReader;
}

+ (id)emptyProfile:(id*)arg1;
+ (void)initalize;
+ (id)profileWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_donatorForDataset:(id)arg1 serviceProvider:(id)arg2 error:(id*)arg3;
- (id)description;
- (bool)donateWithServiceProvider:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)enumerateDatasetsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileData:(id)arg1 error:(id*)arg2;
- (id)initWithProfileData:(id)arg1 provider:(id)arg2 error:(id*)arg3;
- (id)profileInfo;

@end
