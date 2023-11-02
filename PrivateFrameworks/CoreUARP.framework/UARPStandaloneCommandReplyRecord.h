
@interface UARPStandaloneCommandReplyRecord : NSObject <NSCopying, NSSecureCoding> {
    NSString * _modelNumber;
    NSMutableArray * _solicitedURLResponses;
}

@property (readonly) NSString *modelNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addResponseURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getResponseURLs;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelNumber:(id)arg1;
- (id)modelNumber;

@end
