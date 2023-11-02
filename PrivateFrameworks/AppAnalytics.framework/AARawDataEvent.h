
@interface AARawDataEvent : NSObject <AADataEventType> {
    void dictionary;
    void name;
}

+ (id)dataName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 dictionary:(id)arg2;
- (id)toDict;

@end
