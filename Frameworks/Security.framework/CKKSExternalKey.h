
@interface CKKSExternalKey : NSObject <NSSecureCoding> {
    NSData * _keyData;
    NSString * _parentKeyUUID;
    NSString * _uuid;
    NSString * _view;
}

@property (readonly) NSData *keyData;
@property (readonly) NSString *parentKeyUUID;
@property (readonly) NSString *uuid;
@property (readonly) NSString *view;

+ (id)parseFromJSONDict:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 uuid:(id)arg2 parentTLKUUID:(id)arg3 keyData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)keyData;
- (id)parentKeyUUID;
- (id)uuid;
- (id)view;

@end
