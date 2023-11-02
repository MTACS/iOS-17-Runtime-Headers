
@interface WFRemoteExecutionRequest : NSObject <WFPBCodable> {
    NSString * _identifier;
    long long  _minimumSupportedVersion;
    long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;

+ (id)identifierFromData:(id)arg1 error:(id*)arg2;
+ (bool)isUnsupportedVersionError:(id)arg1;
+ (bool)supportsVersion:(long long)arg1;
+ (id)unsupportedVersionError;
+ (long long)version;

- (void).cxx_destruct;
- (id)emptyProtobufError;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (long long)minimumSupportedVersion;
- (bool)readFrom:(id)arg1 error:(id*)arg2;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (void)setIdentifier:(id)arg1;
- (long long)version;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;
- (bool)writeTo:(id)arg1 error:(id*)arg2;

@end
