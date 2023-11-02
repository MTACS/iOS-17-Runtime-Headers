
@interface PKApplicationMessageContentView_State : NSObject {
    NSAttributedString * _body;
    UIFont * _bodyFont;
    PKApplicationMessageIcon * _icon;
    UIImage * _iconImage;
    UIColor * _iconImageTintColor;
    PKApplicationMessageContent * _source;
    NSAttributedString * _title;
    UIFont * _titleFont;
    struct { 
        bool dismiss; 
        bool icon; 
        bool title; 
        bool body; 
    }  _visibility;
}

- (void).cxx_destruct;
- (id)init;

@end
