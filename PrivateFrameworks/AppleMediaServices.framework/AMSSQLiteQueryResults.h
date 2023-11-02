
@interface AMSSQLiteQueryResults : NSObject <AMSSQLiteBinding> {
    AMSSQLiteStatement * _statement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long firstInt64Value;
@property (nonatomic, readonly, copy) NSNumber *firstNumberValue;
@property (nonatomic, readonly) bool hasRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bindArray:(id)arg1 atPosition:(int)arg2;
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDate:(id)arg1 atPosition:(int)arg2;
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNullableString:(id)arg1 atPosition:(int)arg2;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindURL:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;
- (void)enumerateRowsUsingBlock:(id /* block */)arg1;
- (long long)firstInt64Value;
- (id)firstNumberValue;
- (bool)hasRows;
- (id)initWithStatement:(id)arg1;

@end
