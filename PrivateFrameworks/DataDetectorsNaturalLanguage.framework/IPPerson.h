
@interface IPPerson : NSObject {
    NSString * _ABUUID;
    NSString * _fullName;
    NSString * _handle;
    NSString * _handleType;
}

@property (retain) NSString *ABUUID;
@property (readonly, copy) NSString *displayableName;
@property (readonly) NSString *email;
@property (readonly) NSString *fullName;
@property (readonly) NSString *handle;
@property (readonly) NSString *handleType;

- (void).cxx_destruct;
- (id)ABUUID;
- (id)displayableName;
- (id)email;
- (id)fullName;
- (id)handle;
- (id)handleType;
- (id)init;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2;
- (id)initWithHandle:(id)arg1 handleType:(id)arg2 fullName:(id)arg3;
- (id)initWithSGIPPerson:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)setABUUID:(id)arg1;

@end
