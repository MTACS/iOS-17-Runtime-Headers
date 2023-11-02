
@interface BLSFrameSpecifiersRequest : NSObject {
    id /* block */  _completion;
    NSDateInterval * _dateInterval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_completed;
    NSDate * _previousPresentationDate;
    bool  _shouldReset;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSDate *previousPresentationDate;
@property (nonatomic, readonly) bool shouldReset;

- (void).cxx_destruct;
- (void)completeWithDateSpecifiers:(id)arg1;
- (id)dateInterval;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 completion:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;
- (id)previousPresentationDate;
- (bool)shouldReset;

@end
