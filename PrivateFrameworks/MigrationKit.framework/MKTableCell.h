
@interface MKTableCell : NSObject {
    long long  _alignment;
    int  _columnSpan;
    NSFormatter * _formatter;
    NSObject * _value;
}

@property (nonatomic) long long alignment;
@property (nonatomic) int columnSpan;
@property (nonatomic, retain) NSFormatter *formatter;
@property (nonatomic, retain) NSObject *value;

+ (id)cellWithValue:(id)arg1 formatter:(id)arg2;
+ (id)cellWithValue:(id)arg1 formatter:(id)arg2 alignment:(long long)arg3;
+ (id)cellWithValue:(id)arg1 formatter:(id)arg2 columnSpan:(int)arg3;
+ (id)cellWithValue:(id)arg1 formatter:(id)arg2 columnSpan:(int)arg3 alignment:(long long)arg4;

- (void).cxx_destruct;
- (long long)alignment;
- (int)columnSpan;
- (id)formattedValue;
- (id)formatter;
- (void)setAlignment:(long long)arg1;
- (void)setColumnSpan:(int)arg1;
- (void)setFormatter:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
