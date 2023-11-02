
@interface EDSortableThreadItem : EMObject <EDSortableMessage> {
    NSDate * _date;
    NSDate * _displayDate;
    EMReadLater * _readLater;
    NSDate * _sendLaterDate;
}

@property (retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *displayDate;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) EMThreadObjectID *objectID;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)date;
- (id)displayDate;
- (id)ef_publicDescription;
- (id)initWithThreadObjectID:(id)arg1;
- (id)readLater;
- (id)sendLaterDate;
- (void)setDate:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setReadLater:(id)arg1;
- (void)setSendLaterDate:(id)arg1;

@end
