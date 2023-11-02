
@interface WLSocketMessage : NSObject {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

+ (id)messageWithData:(id)arg1 error:(id*)arg2;

- (id)initWithType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
