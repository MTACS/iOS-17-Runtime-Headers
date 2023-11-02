
@interface ICTTMergeableWallClockValue : NSObject {
    NSDate * _timestamp;
    <NSObject><NSCopying> * _value;
}

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) <NSObject><NSCopying> *value;

+ (bool)canParseData:(id)arg1;
+ (id)extractContentsFromBoxedValue:(const void*)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;
- (unsigned long long)merge:(id)arg1;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (void)setTimestamp:(id)arg1;
- (void)setValue:(id)arg1;
- (id)timestamp;
- (id)value;

@end
