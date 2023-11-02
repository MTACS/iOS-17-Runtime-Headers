
@interface FSFCurareInteractionAsDict : NSObject <FSFCurareInteraction> {
    NSDictionary * _content;
    unsigned int  _dataVersion;
    NSString * _interactionId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, readonly) NSString *interactionId;

+ (id)deserialize:(id)arg1 dataVersion:(unsigned int)arg2 interactionId:(id)arg3;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)initWithContent:(id)arg1 interactionId:(id)arg2 dataVersion:(unsigned int)arg3;
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2 interactionId:(id)arg3;
- (id)interactionId;
- (id)json;
- (id)serialize;

@end
