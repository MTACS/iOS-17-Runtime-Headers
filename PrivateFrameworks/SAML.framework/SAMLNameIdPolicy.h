
@interface SAMLNameIdPolicy : SAMLBaseElement

@property (nonatomic, readonly) NSString *allowCreation;
@property (nonatomic, readonly) NSString *format;

+ (id)createElement:(id*)arg1;

- (id)allowCreation;
- (id)format;

@end
