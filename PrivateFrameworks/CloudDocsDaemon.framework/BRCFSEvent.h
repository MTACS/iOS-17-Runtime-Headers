
@interface BRCFSEvent : NSObject {
    unsigned long long  _eventID;
    unsigned int  _flags;
    NSString * _path;
}

@property (nonatomic, readonly) unsigned long long eventID;
@property (nonatomic) unsigned int flags;
@property (nonatomic, retain) NSString *path;

- (void).cxx_destruct;
- (unsigned long long)eventID;
- (unsigned int)flags;
- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 eventID:(unsigned long long)arg3;
- (id)path;
- (void)setFlags:(unsigned int)arg1;
- (void)setPath:(id)arg1;

@end
