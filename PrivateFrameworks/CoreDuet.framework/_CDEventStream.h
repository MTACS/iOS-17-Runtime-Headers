
@interface _CDEventStream : NSObject {
    _CDEventStreamProperties * eventStreamProperties;
}

@property (readonly) _CDEventStreamProperties *eventStreamProperties;

+ (id)eventStreamWithProperties:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)eventStreamProperties;
- (id)initWithProperties:(id)arg1;

@end
