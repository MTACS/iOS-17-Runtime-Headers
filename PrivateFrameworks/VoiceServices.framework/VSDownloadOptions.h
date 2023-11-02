
@interface VSDownloadOptions : NSObject {
    bool  _allowCellularData;
    bool  _allowDiscretionary;
}

@property (nonatomic) bool allowCellularData;
@property (nonatomic) bool allowDiscretionary;

- (bool)allowCellularData;
- (bool)allowDiscretionary;
- (void)setAllowCellularData:(bool)arg1;
- (void)setAllowDiscretionary:(bool)arg1;

@end
