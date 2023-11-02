
@interface PK_ipp_t : NSObject <NSCopying, NSSecureCoding> {
    bool  _addAttributesInAppropriateGroups;
    NSMutableArray * _attrs;
    NSData * _dataRemaining;
    unsigned short  _op_or_status;
    unsigned int  _request_id;
    int  _state;
}

@property (readonly) NSMutableArray *attrs;
@property (readonly) NSData *dataRemaining;
@property unsigned short op_or_status;
@property unsigned int request_id;
@property int state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAttrToAppropriateGroup:(id)arg1;
- (void)_addBoolean:(int)arg1 name:(id)arg2 value:(bool)arg3;
- (void)_addCollection:(int)arg1 name:(id)arg2 value:(id)arg3;
- (void)_addInteger:(int)arg1 valueTag:(int)arg2 name:(id)arg3 value:(int)arg4;
- (void)_addIntegers:(int)arg1 valueTag:(int)arg2 name:(id)arg3 count:(unsigned long long)arg4 adder:(id /* block */)arg5;
- (void)_addOctetString:(int)arg1 name:(id)arg2 data:(const void*)arg3 length:(int)arg4;
- (void)_addRange:(int)arg1 name:(id)arg2 lower:(int)arg3 upper:(int)arg4;
- (void)_addRanges:(int)arg1 name:(id)arg2 count:(unsigned long long)arg3 lowers:(const int*)arg4 uppers:(const int*)arg5;
- (void)_addResolution:(int)arg1 name:(id)arg2 unit:(int)arg3 xres:(int)arg4 yres:(int)arg5;
- (void)_addString:(int)arg1 valueTag:(int)arg2 name:(id)arg3 lang:(id)arg4 value:(id)arg5;
- (void)_addStrings:(int)arg1 valueTag:(int)arg2 name:(id)arg3 lang:(id)arg4 values:(id)arg5;
- (void)_deleteAttribute:(id)arg1;
- (id)_descriptionLeader;
- (id)_findAttribute0:(id)arg1 valueTag:(int)arg2;
- (id)_initWithAttrs:(id)arg1;
- (void)_withGroupingBehavior:(id /* block */)arg1;
- (id)addNewAttr:(id)arg1 groupTag:(int)arg2 valueTag:(int)arg3;
- (id)attrs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRemaining;
- (id)dataRepresentation;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttributes:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned short)op_or_status;
- (unsigned int)request_id;
- (void)setOp_or_status:(unsigned short)arg1;
- (void)setRequest_id:(unsigned int)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
