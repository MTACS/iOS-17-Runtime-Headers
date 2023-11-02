
@interface TIEventDescriptor : NSObject {
    NSString * _eventDescription;
    NSString * _eventName;
    NSArray * _fieldDescriptors;
    bool  _includeTestingParameters;
}

@property (nonatomic, readonly) NSString *eventDescription;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSArray *fieldDescriptors;
@property (nonatomic, readonly) bool includeTestingParameters;

+ (id)eventDescriptorWithEventName:(id)arg1 eventDescription:(id)arg2 fieldDescriptors:(id)arg3 includeTestingParameters:(bool)arg4;

- (void).cxx_destruct;
- (id)eventDescription;
- (id)eventName;
- (id)fieldDescriptors;
- (bool)includeTestingParameters;
- (id)initWithEventName:(id)arg1 eventDescription:(id)arg2 fieldDescriptors:(id)arg3 includeTestingParameters:(bool)arg4;

@end
