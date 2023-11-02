
@interface DraggingContext : NSObject {
    bool  _isManaged;
}

@property (nonatomic) bool isManaged;

- (bool)isManaged;
- (void)setIsManaged:(bool)arg1;

@end
