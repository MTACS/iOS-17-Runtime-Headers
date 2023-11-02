
@interface CNHandle : NSObject <CNHandle> {
    NSString * _customIdentifier;
    NSString * _stringValue;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *customIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)geminiHandleForHandle:(id)arg1;
+ (long long)geminiHandleTypeForType:(unsigned long long)arg1;
+ (id)geminiHandleTypeMap;
+ (unsigned long long)handleTypeForPropertyKey:(id)arg1;
+ (id)inPersonHandleForHandle:(id)arg1;
+ (long long)inPersonHandleTypeForType:(unsigned long long)arg1;
+ (id)inPersonHandleTypeMap;
+ (id)keyTypeMapping;
+ (id)tuHandleForHandle:(id)arg1;
+ (long long)tuHandleTypeFromType:(unsigned long long)arg1;
+ (id)tuHandleTypeMap;

- (void).cxx_destruct;
- (id)customIdentifier;
- (id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithStringValue:(id)arg1 type:(unsigned long long)arg2;
- (id)stringValue;
- (unsigned long long)type;

@end
