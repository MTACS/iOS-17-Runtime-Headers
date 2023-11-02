
@interface SwiftUI.TimelineIdentifier : NSObject <NSCopying> {
    void identifier;
}

@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void*)arg1;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
