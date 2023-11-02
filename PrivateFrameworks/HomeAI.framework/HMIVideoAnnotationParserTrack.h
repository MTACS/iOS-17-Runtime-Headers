
@interface HMIVideoAnnotationParserTrack : NSObject {
    NSUUID * _UUID;
    Class  _eventClass;
    NSArray * _records;
}

@property (readonly) NSUUID *UUID;
@property (readonly) Class eventClass;
@property (readonly) NSArray *records;

- (void).cxx_destruct;
- (id)UUID;
- (Class)eventClass;
- (id)initWithEventClass:(Class)arg1 records:(id)arg2 UUID:(id)arg3;
- (id)records;

@end
