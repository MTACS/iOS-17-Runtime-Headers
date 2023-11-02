
@interface _DBIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {
    SBIconListFlowLayout * _layout;
}

@property (nonatomic, retain) SBIconListFlowLayout *layout;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)arg1;
- (id)layout;
- (id)layoutForIconLocation:(id)arg1;
- (void)setLayout:(id)arg1;

@end
