
@interface VCControlChannelMessageOptions : NSObject {
    bool  _duplicateMessageOnServerLink;
}

@property bool duplicateMessageOnServerLink;

- (bool)duplicateMessageOnServerLink;
- (void)setDuplicateMessageOnServerLink:(bool)arg1;

@end
