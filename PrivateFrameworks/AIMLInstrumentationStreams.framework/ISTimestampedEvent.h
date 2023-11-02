
@interface ISTimestampedEvent : NSObject {
    void orderedEvent;
    void timestamp;
}

@property (nonatomic, readonly) SIOrderedEvent *orderedEvent;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)init;
- (id)orderedEvent;
- (double)timestamp;

@end
