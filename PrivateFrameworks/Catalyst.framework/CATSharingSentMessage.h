
@interface CATSharingSentMessage : NSObject <CATSharingContentMessage> {
    NSData * _content;
}

@property (nonatomic, readonly, copy) NSData *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageType;
@property (readonly) Class superclass;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (id)dictionaryValue;
- (id)initWithContent:(id)arg1;
- (long long)messageType;

@end
