
@interface _TIKeyboardSecureCandidate : NSObject <NSCopying> {
    NSString * _input;
    NSString * _secureContent;
    NSString * _secureFormattedContent;
    NSString * _secureHeader;
    NSString * _truncationSentinel;
}

@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) NSString *secureContent;
@property (nonatomic, readonly) NSString *secureFormattedContent;
@property (nonatomic, readonly) NSString *secureHeader;
@property (nonatomic, readonly) NSString *truncationSentinel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSecureHeader:(id)arg1 secureContent:(id)arg2 secureFormattedContent:(id)arg3 input:(id)arg4 truncationSentinel:(id)arg5;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)secureContent;
- (id)secureFormattedContent;
- (id)secureHeader;
- (id)truncationSentinel;

@end
