
@interface _MPCQueueControllerRegistry : NSObject {
    MPProtocolProxy<MPCQueueControllerPublisher> * _publisherProxy;
    NSMapTable * _transportableExtensions;
}

@property (nonatomic, readonly) MPProtocolProxy<MPCQueueControllerPublisher> *publisherProxy;
@property (nonatomic, readonly, copy) NSMapTable *transportableExtensions;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)publisherProxy;
- (id)transportableExtensions;

@end
