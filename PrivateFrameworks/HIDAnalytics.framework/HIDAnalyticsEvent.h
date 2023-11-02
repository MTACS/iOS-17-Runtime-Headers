
@interface HIDAnalyticsEvent : NSObject {
    NSDictionary * _desc;
    NSMutableDictionary * _fields;
    bool  _isLogged;
    bool  _isUpdated;
    NSString * _name;
}

@property (retain) NSDictionary *desc;
@property bool isLogged;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (void)activate;
- (void)addField:(id)arg1;
- (void)addHistogramFieldWithSegments:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; }*)arg2 count:(long long)arg3;
- (void)cancel;
- (id)desc;
- (id)description;
- (id)initWithAttributes:(id)arg1 description:(id)arg2;
- (bool)isLogged;
- (id)name;
- (void)setDesc:(id)arg1;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2;
- (void)setIsLogged:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setStringValue:(id)arg1 forField:(id)arg2;
- (void)setValue:(id)arg1;
- (id)value;

@end
