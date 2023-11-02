
@interface WFTrelloUser : WFTrelloObject {
    NSURL * _URL;
    NSString * _email;
    NSString * _username;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *username;

+ (id)JSONKeyPathsByPropertyKey;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)email;
- (id)username;

@end
