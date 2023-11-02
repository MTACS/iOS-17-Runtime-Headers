
@interface UIEventAttribution : NSObject <NSCopying> {
    NSURL * _destinationURL;
    NSString * _purchaser;
    NSURL * _reportEndpoint;
    NSString * _sourceDescription;
    unsigned char  _sourceIdentifier;
}

@property (nonatomic, readonly, copy) NSURL *destinationURL;
@property (nonatomic, readonly, copy) NSString *purchaser;
@property (nonatomic, readonly, copy) NSURL *reportEndpoint;
@property (nonatomic, readonly, copy) NSString *sourceDescription;
@property (nonatomic, readonly) unsigned char sourceIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationURL;
- (unsigned long long)hash;
- (id)initWithSourceIdentifier:(unsigned char)arg1 destinationURL:(id)arg2 reportEndpoint:(id)arg3 sourceDescription:(id)arg4 purchaser:(id)arg5;
- (id)initWithSourceIdentifier:(unsigned char)arg1 destinationURL:(id)arg2 sourceDescription:(id)arg3 purchaser:(id)arg4;
- (id)initWithUISClickAttribution:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)purchaser;
- (id)reportEndpoint;
- (id)sourceDescription;
- (unsigned char)sourceIdentifier;
- (id)toUISClickAttribution;

@end
