
@interface MRContentItemRequest : NSObject <NSSecureCoding> {
    MRContentItem * _item;
    MRPlaybackQueueRequest * _request;
}

@property (nonatomic, retain) MRContentItem *item;
@property (nonatomic, retain) MRPlaybackQueueRequest *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 request:(id)arg2;
- (id)item;
- (id)request;
- (void)setItem:(id)arg1;
- (void)setRequest:(id)arg1;

@end
