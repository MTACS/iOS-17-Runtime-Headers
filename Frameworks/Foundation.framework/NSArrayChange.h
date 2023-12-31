
@interface NSArrayChange : NSObject

@property (readonly) unsigned long long changeType;
@property (readonly) unsigned long long destinationIndex;
@property (readonly) unsigned long long sourceIndex;
@property (readonly) id value;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned long long)changeType;
- (unsigned long long)destinationIndex;
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;
- (unsigned long long)sourceIndex;
- (id)value;

@end
