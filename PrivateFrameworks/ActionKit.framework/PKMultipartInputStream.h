
@interface PKMultipartInputStream : NSInputStream {
    NSString * _boundary;
    unsigned long long  _currentPart;
    unsigned long long  _delivered;
    NSData * _footer;
    unsigned long long  _length;
    NSMutableArray * _parts;
    unsigned long long  _status;
    <NSStreamDelegate> * delegate;
}

@property (nonatomic, retain) NSString *boundary;
@property (nonatomic) unsigned long long currentPart;
@property (nonatomic) unsigned long long delivered;
@property (nonatomic, retain) NSData *footer;
@property (nonatomic) unsigned long long length;
@property (nonatomic, retain) NSMutableArray *parts;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (void)_scheduleInCFRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_setCFClientFlags:(unsigned long long)arg1 callback:(int (*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); })arg3;
- (void)addPartWithHeaders:(id)arg1 path:(id)arg2;
- (void)addPartWithHeaders:(id)arg1 string:(id)arg2;
- (void)addPartWithName:(id)arg1 data:(id)arg2;
- (void)addPartWithName:(id)arg1 data:(id)arg2 contentType:(id)arg3;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 data:(id)arg3 contentType:(id)arg4;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3 contentType:(id)arg4;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 stream:(id)arg3 streamLength:(unsigned long long)arg4;
- (void)addPartWithName:(id)arg1 path:(id)arg2;
- (void)addPartWithName:(id)arg1 string:(id)arg2;
- (id)boundary;
- (void)close;
- (unsigned long long)currentPart;
- (id)delegate;
- (unsigned long long)delivered;
- (id)footer;
- (bool)hasBytesAvailable;
- (id)init;
- (unsigned long long)length;
- (void)open;
- (id)parts;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setBoundary:(id)arg1;
- (void)setCurrentPart:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelivered:(unsigned long long)arg1;
- (void)setFooter:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setParts:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (unsigned long long)streamStatus;
- (void)updateLength;

@end
