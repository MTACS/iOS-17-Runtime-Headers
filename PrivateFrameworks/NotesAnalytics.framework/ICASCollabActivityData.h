
@interface ICASCollabActivityData : NSObject <AADataEventType> {
    ICASClickContext * _clickContext;
    ICASCollabActivityContextPath * _collabActivityContextPath;
    NSNumber * _hasRecentUpdates;
    NSNumber * _isUserMentioned;
    ICASMode * _mode;
}

@property (nonatomic, readonly) ICASClickContext *clickContext;
@property (nonatomic, readonly) ICASCollabActivityContextPath *collabActivityContextPath;
@property (nonatomic, readonly) NSNumber *hasRecentUpdates;
@property (nonatomic, readonly) NSNumber *isUserMentioned;
@property (nonatomic, readonly) ICASMode *mode;

+ (id)dataName;

- (void).cxx_destruct;
- (id)clickContext;
- (id)collabActivityContextPath;
- (id)hasRecentUpdates;
- (id)initWithCollabActivityContextPath:(id)arg1 clickContext:(id)arg2 mode:(id)arg3 isUserMentioned:(id)arg4 hasRecentUpdates:(id)arg5;
- (id)isUserMentioned;
- (id)mode;
- (id)toDict;

@end
