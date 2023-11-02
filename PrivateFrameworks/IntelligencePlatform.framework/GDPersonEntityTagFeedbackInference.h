
@interface GDPersonEntityTagFeedbackInference : NSObject {
    long long  _idValue;
    long long  _tag;
}

@property (nonatomic, readonly) long long idValue;
@property (nonatomic, readonly) long long tag;

- (long long)idValue;
- (id)initWithIDValue:(long long)arg1 tag:(long long)arg2;
- (long long)tag;

@end
