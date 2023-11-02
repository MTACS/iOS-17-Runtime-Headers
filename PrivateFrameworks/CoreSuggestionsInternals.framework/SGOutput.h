
@interface SGOutput : NSObject {
    NSArray * _exceptionTemplates;
    NSDictionary * _jsMessageLogs;
    NSArray * _outputItems;
    NSDictionary * _sourceMetadata;
}

@property (nonatomic, readonly) NSArray *exceptionTemplates;
@property (nonatomic, readonly) NSDictionary *jsMessageLogs;
@property (nonatomic, readonly) NSArray *outputItems;
@property (nonatomic, readonly) NSDictionary *sourceMetadata;

- (void).cxx_destruct;
- (id)exceptionTemplates;
- (id)initWithOutputItems:(id)arg1 exeptionTemplates:(id)arg2 jsMessageLogs:(id)arg3;
- (id)initWithOutputItems:(id)arg1 sourceMetadata:(id)arg2 exeptionTemplates:(id)arg3 jsMessageLogs:(id)arg4;
- (id)jsMessageLogs;
- (id)outputItems;
- (id)sourceMetadata;

@end
