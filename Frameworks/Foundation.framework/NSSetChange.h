
@interface NSSetChange : NSObject

@property (readonly) unsigned long long changeType;
@property (readonly) id value;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned long long)changeType;
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;
- (id)value;

@end
