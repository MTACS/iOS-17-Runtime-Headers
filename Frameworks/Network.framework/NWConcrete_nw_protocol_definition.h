
@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition> {
    int (* allocate_metadata;
    int (* allocate_options;
    int (* check_equality_options;
    struct nw_protocol_definition_common_state { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); id /* block */ x11; } * common_state;
    int (* compare_metadata;
    int (* compare_options;
    int (* copy_options;
    int (* deallocate_metadata;
    int (* deallocate_options;
    int (* deserialize_metadata;
    int (* deserialize_options;
    struct nw_protocol_definition_extended_state { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); int (*x29)(); int (*x30)(); int (*x31)(); int (*x32)(); unsigned int x33; unsigned int x34; } * extended_state;
    unsigned int  framer;
    unsigned int  has_global_definition;
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  identifier;
    unsigned int  is_proxy;
    unsigned int  message_is_stream;
    unsigned int  multipath;
    unsigned int  receive_single_message;
    unsigned int  serialize_in_parameters;
    int (* serialize_metadata;
    int (* serialize_options;
    unsigned int  supports_discontiguous_data;
    unsigned int  supports_replies;
    unsigned char  unique_identifier;
    int  variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)init;

@end
