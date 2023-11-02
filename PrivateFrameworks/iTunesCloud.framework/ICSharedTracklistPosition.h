
@interface ICSharedTracklistPosition : NSObject {
    NSString * _afterItemIdentifier;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *afterItemIdentifier;
@property (nonatomic, readonly) long long type;

+ (id)playLastPositionWithAfterItemIdentifierHint:(id)arg1;
+ (id)playNextPositionWithAfterItemIdentifierHint:(id)arg1;
+ (id)specifiedPositionAfterItemIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)afterItemIdentifier;
- (long long)type;

@end
