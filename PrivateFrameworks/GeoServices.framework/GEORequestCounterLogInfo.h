
@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {
    NSDictionary * _dict;
}

@property (nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) unsigned long long recvBytes;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } requestType;
@property (nonatomic, readonly) NSString *requestTypeString;
@property (nonatomic, readonly) unsigned char result;
@property (nonatomic, readonly) NSString *resultString;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) unsigned long long usedInterfaceTypes;
@property (nonatomic, readonly) unsigned long long xmitBytes;

+ (id)counterLogInfoWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendFormattedCSVStringTo:(id)arg1;
- (void)_appendFormattedStringTo:(id)arg1;
- (id)appID;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)recvBytes;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })requestType;
- (id)requestTypeString;
- (unsigned char)result;
- (id)resultString;
- (id)start;
- (unsigned long long)usedInterfaceTypes;
- (unsigned long long)xmitBytes;

@end
