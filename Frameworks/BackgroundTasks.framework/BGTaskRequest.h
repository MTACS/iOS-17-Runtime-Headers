
@interface BGTaskRequest : NSObject <NSCopying> {
    NSDate * _earliestBeginDate;
    NSString * _identifier;
}

@property (copy) NSDate *earliestBeginDate;
@property (readonly, copy) NSString *identifier;

+ (id)_requestFromActivity:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestBeginDate;
- (id)identifier;
- (void)setEarliestBeginDate:(id)arg1;

@end
