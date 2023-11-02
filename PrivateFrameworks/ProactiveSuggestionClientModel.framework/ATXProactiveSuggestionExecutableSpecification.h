
@interface ATXProactiveSuggestionExecutableSpecification : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    NSData * _executable;
    NSString * _executableClassString;
    NSString * _executableDescription;
    NSString * _executableIdentifier;
    <ATXSuggestionExecutableProtocol> * _executableObject;
    unsigned long long  _executableObjectHash;
    long long  _executableType;
}

@property (nonatomic, readonly) NSData *executable;
@property (nonatomic, readonly) NSString *executableClassString;
@property (nonatomic, readonly) NSString *executableDescription;
@property (nonatomic, readonly) NSString *executableIdentifier;
@property (readonly) <ATXSuggestionExecutableProtocol> *executableObject;
@property (nonatomic, readonly) unsigned long long executableObjectHash;
@property (nonatomic, readonly) long long executableType;

+ (id)stringForExecutableType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedExecutableClasses;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForNSUInteger:(unsigned long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)executable;
- (id)executableClassString;
- (id)executableDataFromExecutableObject:(id)arg1 executableClassStringFromObject:(id)arg2;
- (id)executableDescription;
- (id)executableIdentifier;
- (id)executableObject;
- (id)executableObjectFromData:(id)arg1 executableClassString:(id)arg2;
- (unsigned long long)executableObjectHash;
- (long long)executableType;
- (bool)fuzzyIsEqualToExecutableSpecification:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecutable:(id)arg1 executableObjectHash:(unsigned long long)arg2 expectedExecutableClassString:(id)arg3 executableDescription:(id)arg4 executableIdentifier:(id)arg5 suggestionExecutableType:(long long)arg6;
- (id)initWithExecutable:(id)arg1 expectedExecutableClassString:(id)arg2 executableDescription:(id)arg3 executableIdentifier:(id)arg4;
- (id)initWithExecutable:(id)arg1 expectedExecutableClassString:(id)arg2 executableDescription:(id)arg3 executableIdentifier:(id)arg4 suggestionExecutableType:(long long)arg5;
- (id)initWithExecutableObject:(id)arg1 executableDescription:(id)arg2 executableIdentifier:(id)arg3 suggestionExecutableType:(long long)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRawData;
- (id)proto;

@end
