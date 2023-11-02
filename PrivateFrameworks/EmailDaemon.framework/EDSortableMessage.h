
@interface EDSortableMessage : EMObject <EDSortableMessage> {
    NSDate * _date;
    NSDate * _displayDate;
    EMReadLater * _readLater;
    NSDate * _sendLaterDate;
}

@property (readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *displayDate;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) EMObjectID *objectID;
@property (readonly) EMReadLater *readLater;
@property (readonly) NSDate *sendLaterDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)date;
- (id)displayDate;
- (id)initWithObjectID:(id)arg1 date:(id)arg2 displayDate:(id)arg3 readLater:(id)arg4 sendLaterDate:(id)arg5;
- (id)readLater;
- (id)sendLaterDate;

@end
