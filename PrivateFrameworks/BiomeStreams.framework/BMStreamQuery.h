
@interface BMStreamQuery : NSObject {
    NSDateInterval * _interval;
    long long  _origin;
    <BMStream> * _stream;
}

@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly) <BMStream> *stream;

+ (id)new;
+ (id)publisherForStream:(id)arg1 interval:(id)arg2;
+ (id)publisherForStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3;
- (id)interval;
- (long long)origin;
- (id)stream;

@end
