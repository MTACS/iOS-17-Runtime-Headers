
@interface ISComponentGroup : NSObject {
    void eventsInternal;
}

@property (nonatomic, readonly) ISComponentIdentifier *componentIdentifier;
@property (nonatomic, readonly) NSArray *events;

- (void).cxx_destruct;
- (id)componentIdentifier;
- (id)events;
- (id)init;
- (id)initWithEventsBridge:(id)arg1;

@end
