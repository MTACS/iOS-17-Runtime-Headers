
@interface TICredentialCustomInfo : NSObject {
    NSDictionary * _customInfo;
    NSUUID * _documentIdentifier;
}

@property (nonatomic, readonly) NSDictionary *customInfo;
@property (nonatomic, readonly) NSUUID *documentIdentifier;

- (void).cxx_destruct;
- (id)customInfo;
- (id)documentIdentifier;
- (id)initWithCustomInfo:(id)arg1 documentIdentifier:(id)arg2;

@end
