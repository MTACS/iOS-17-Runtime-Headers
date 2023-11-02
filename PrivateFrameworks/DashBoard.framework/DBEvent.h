
@interface DBEvent : NSObject {
    id  _context;
    unsigned long long  _type;
}

@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) unsigned long long type;

+ (id)eventWithType:(unsigned long long)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)context;
- (id)initWithType:(unsigned long long)arg1 context:(id)arg2;
- (unsigned long long)type;

@end
